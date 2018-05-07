snippet Circle
abbr 円テンプレート
 //*********************************************
 //                円(Circle)                  *
 //*********************************************
 typedef pair<Point, LD> Circle;
 
 // 円と円の交差判定 ***************************
 int IsecCC(Circle c1, Circle c2){
     // 0: 包含, 1: 内接, 2: 2点で交わる, 3: 外接, 4: 離れている
     enum{INCLUSION, INSCRIBED, INTERSECT, CIRCUMSCRIBED, LEAVE};
     LD d = DistPP(c1.first, c2.first);
     if(d > c1.second + c2.second) return LEAVE;
     else if(EQ(d, c1.second + c2.second)) return CIRCUMSCRIBED;
     else if(abs(c1.second - c2.second) < d && d < c1.second + c2.second) return INTERSECT;
     else if(EQ(d, abs(c1.second - c2.second))) return INSCRIBED;
     else return INCLUSION;
 }
 // ********************************************


 // 円と直線の交点 *****************************
 pair<Point, Point> CrossPointCL(Circle c, Line l){
     Point l1 = l.first, l2 = l.second, cp = c.first;
     LD r = c.second;
     Point ft = Proj(l, cp);
     if(!GE(r * r, norm(ft-cp))) throw "not exist crosspoint";
 
     Point dir = sqrt(max(r*r - norm(ft-cp), 0.0L)) / abs(l2-l1) * (l2-l1);
 
     if(!EQ(r*r, norm(ft-cp))) return make_pair(ft - dir, ft + dir);
     else return make_pair(ft + dir, ft + dir);
 }
 // ********************************************


 // 円と円の交点 *******************************
 pair<Point, Point> CrossPointCC(Circle a, Circle b){
     Point ap = a.first, bp = b.first;
     LD ar = a.second, br = b.second;
     Point ab = bp-ap;
     LD d = abs(ab);
     LD crL = (norm(ab) + ar*ar - br*br) / (2*d);
     if(EQ(d, 0) || ar < abs(crL)) throw "not exist crosspoint";
 
     Point abN = ab * Point(0, sqrt(ar*ar - crL*crL) / d);
     Point cp = ap + crL/d * ab;
 
     if (!EQ(norm(abN), 0)) return make_pair(cp-abN, cp+abN);
     else return make_pair(cp+abN, cp+abN);
 }
 // ********************************************


 // 円の接線の接点 *****************************
 pair<Point, Point> TangentPoints(Circle a, Point p){
     Point ap = a.first;
     LD ar = a.second;
     LD sin = ar / abs(p-ap);
     if (!LE(sin, 1)) throw "not exist tangentpoint";
     LD t = M_PI_2 - asin(min(sin, 1.0L));
     if (!EQ(sin, 1)) return make_pair(ap + (p-ap)*polar(sin, -t), ap + (p-ap)*polar(sin, t));
     else return make_pair(ap + (p-ap)*polar(sin, t), ap + (p-ap)*polar(sin, t));
 }
 // ********************************************


 // 2円の共通接線の接点 ************************
 vector<Line> TangentLines(Circle a, Circle b){
     vector<Line> ls;
     Point ap = a.first, bp = b.first;
     LD ar = a.second, br = b.second, d = abs(bp-ap);
     for(int i = 0; i < 2; i++){
         LD sin = (ar - (1-i*2)*br) / d;
         if (!LE(sin*sin, 1)) break;
         LD cos = sqrt(max(1 - sin*sin, 0.0L));
         for(int j = 0; j < 2; j++){
             Point n = (bp-ap) * Point(sin, (1-j*2)*cos) / d;
             ls.push_back(Line(ap + ar*n, bp + (1-i*2)*br*n));
             if (cos < EPS) break;
         }
     }
     return ls;
 }
 // ********************************************
