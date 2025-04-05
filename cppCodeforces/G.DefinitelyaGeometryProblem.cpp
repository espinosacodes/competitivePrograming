#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

struct Point {
    long long x, y;
    Point(long long _x = 0, long long _y = 0) : x(_x), y(_y) {}
    
    bool operator<(const Point& other) const {
        if (x != other.x) return x < other.x;
        return y < other.y;
    }
};

double dist(const Point& a, const Point& b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    
    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }
    
    // If k=1, answer is 0 (circle with radius 0)
    if (k == 1) {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }
    
    // Sort points (they lie on a line)
    sort(points.begin(), points.end());
    
    // Find minimum distance between point i and point i+k-1
    double minDiameter = 1e18;
    for (int i = 0; i <= n - k; i++) {
        double diameter = dist(points[i], points[i + k - 1]);
        minDiameter = min(minDiameter, diameter);
    }
    
    // Diameter is twice the radius, so area = π(d/2)² = π*d²/4
    double radius = minDiameter / 2.0;
    double area = M_PI * radius * radius;
    
    cout << fixed << setprecision(12) << area << endl;
    
    return 0;
}