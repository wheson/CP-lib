//*********************************************
//             多角形(Polygon)                *
//*********************************************

namespace std {
    bool operator < (const Point &a, const Point &b){
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }
}

// 多角形の面積 (PolygonErea) *****************
LD PolygonErea(Polygon p){
    LD area = 0;
    int n = p.size();
    for(int i = 0; i < n; i++){
        area += Cross(p[i], p[(i+1) % n]);
    }
    return abs(area) / 2;
}
// ********************************************


// 凸性判定 (IsConvex) ************************
bool IsConvex(Polygon pol){
    int n = pol.size();
    for(int i = 0; i < n; i++){
        if(CCW(pol[i], pol[(i+1) % n], pol[(i+2) % n]) == -1) return false;
    }
    return true;
}
// ********************************************


// 多角形-点包含関係 (PolygonPointContainment)
int PolygonPointContainment(Polygon pol, Point p){
    enum {OUT, ON, IN};
    bool in = false;
    int n = pol.size();
    for(int i = 0; i < n; i++){
        Point a = pol[i] - p, b = pol[(i+1) % n] - p;
        if(a.Y > b.Y) swap(a, b);
        if(a.Y <= 0 && 0 < b.Y && Cross(a, b) < 0) in = !in;
        if(Cross(a, b) == 0 && Dot(a, b) <= 0) return ON;
    }
    return in ? IN : OUT;
}
// ********************************************