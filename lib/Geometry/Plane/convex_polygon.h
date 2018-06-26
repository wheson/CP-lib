//*********************************************
//          凸多角形(ConvexPolygon)           *
//*********************************************

// 凸包[θ<=180](ConvexHull) ******************
Polygon ConvexHull(Polygon pol){
    int n = pol.size(), k = 0;
    sort(pol.begin(), pol.end());
    Polygon ch(2*n);
    for(int i = 0; i < n; ch[k++] = pol[i++])
        while(k >= 2 && CCW(ch[k-2], ch[k-1], pol[i]) == -1) --k;

    for(int i = n-2, t = k+1; i >= 0; ch[k++] = pol[i--])
        while(k >= t && CCW(ch[k-2], ch[k-1], pol[i]) == -1) --k;

    ch.resize(k-1);
    return ch;
}
// ********************************************


// 凸包[θ<180](ConvexHull2) ******************
Polygon ConvexHull2(Polygon pol){
    int n = pol.size(), k = 0;
    sort(pol.begin(), pol.end());
    Polygon ch(2*n);
    for(int i = 0; i < n; ch[k++] = pol[i++])
        while(k >= 2 && CCW(ch[k-2], ch[k-1], pol[i]) <= 0) --k;

    for(int i = n-2, t = k+1; i >= 0; ch[k++] = pol[i--])
        while(k >= t && CCW(ch[k-2], ch[k-1], pol[i]) <= 0) --k;

    ch.resize(k-1);
    return ch;
}
// ********************************************


// 凸多角形の直径 (ConvexPolygonDiameter) *****
pair<int, int> ConvexPolygonDiameter(Polygon cpol){
    int n = cpol.size();
    int is = 0, js = 0;
    for (int i = 1; i < n; ++i) {
        if (imag(cpol[i]) > imag(cpol[is])) is = i;
        if (imag(cpol[i]) < imag(cpol[js])) js = i;
    }
    LD maxd = norm(cpol[is]-cpol[js]);

    int i, maxi, j, maxj;
    i = maxi = is;
    j = maxj = js;
    do{
        if(Cross(cpol[(i+1)%n] - cpol[i], cpol[(j+1)%n] - cpol[j]) >= 0) j = (j+1) % n;
        else i = (i+1) % n;
        if(norm(cpol[i]-cpol[j]) > maxd) {
            maxd = norm(cpol[i]-cpol[j]);
            maxi = i; maxj = j;
        }
    } while(i != is || j != js);
    return make_pair(maxi, maxj);
}
// ********************************************


// 凸多角形の切断 (ConvexPolygonCut) **********
Polygon ConvexPolygonCut(Polygon cpol, Line l){
    int n = cpol.size();
    Point l1 = l.first, l2 = l.second;
    Polygon q;
    for(int i = 0; i < n; i++){
        Point a = cpol[i], b = cpol[(i+1)%n];
        if(CCW(l1, l2, a) != -1) q.push_back(a);
        if(CCW(l1, l2, a) * CCW(l1, l2, b) < 0) q.push_back(CrossPointLL(Line(a, b), l));
    }
    return q;
}
// ********************************************
