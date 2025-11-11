#include <iostream>
using namespace std;
class Vector2D {
private:
    float x, y;
public:
    Vector2D() : x(0), y(0) {}
    Vector2D(float a, float b) : x(a), y(b) {}
    Vector2D operator+(const Vector2D &v) {
        return Vector2D(x + v.x, y + v.y);
    }
    Vector2D operator-(const Vector2D &v) {
        return Vector2D(x - v.x, y - v.y);
    }
    float operator*(const Vector2D &v) {
        return (x * v.x + y * v.y);
    }
    Vector2D operator-() {
        return Vector2D(-x, -y);
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Vector2D v1(3, 4), v2(1, 2);
    Vector2D v3 = v1 + v2;     
    Vector2D v4 = v1 - v2;    
    float dot = v1 * v2;      
    Vector2D v5 = -v1;        
    cout << "v1 + v2 = "; v3.display();
    cout << "v1 - v2 = "; v4.display();
    cout << "Dot Product = " << dot << endl;
    cout << "Unary -v1 = "; v5.display();
    return 0;
}
