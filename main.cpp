#include <iostream>

struct Vector {
    float x;
    float y;

    Vector operator+(Vector &vector) const {
        return { this->x * vector.y + vector.x * this->y, this->y * vector.y };
    }
};


int main()
{
    using namespace std;
    Vector vector1 { 5.0, 7.0 };
    Vector vector2 { 6.0, 8.0 };
    Vector vector3 { vector1 + vector2 };

    cout << vector3.x << "/" << vector3.y;

    return 0 ;
}
