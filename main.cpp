#include <iostream>
#include "Vector3D.h"

void PrintVector(const Vector3D &v)
{
    std::cout << "X: " << v.x << " Y: " << v.y << " Z: " << v.z;
}

int main()
{
    float x = 1.0f, y = 1.5f, z = -0.5f;
    Vector3D vector(x, y, z);
    std::cout << "Vector created." << std::endl;
    PrintVector(vector);
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "The magnitude of the vector: " << Magnitude(vector) << std::endl;

    std::cout << std::endl;
    Vector3D unitVector = Normalize(vector);
    std::cout << "The unit vector:" << std::endl;
    PrintVector(unitVector);
    std::cout << std::endl << std::endl;

    Vector3D negatedVector = -vector;
    std::cout << "The negated vector:" << std::endl;
    PrintVector(negatedVector);
    std::cout << std::endl << std::endl;

    float scale = 2.0f;
    Vector3D scaledVector = vector * scale;
    std::cout << "The vector scaled by " << scale << ":" << std::endl;
    PrintVector(scaledVector);
    std::cout << std::endl << std::endl;

    float divisor = 2.0f;
    Vector3D divisedVector = vector / divisor;
    std::cout << "The vector divided by " << divisor << ":" << std::endl;
    PrintVector(divisedVector);
    std::cout << std::endl << std::endl;

    Vector3D additionVector(1.0f, 1.0f, 1.0f);
    std::cout << "Addition vector created.";
    PrintVector(additionVector);
    std::cout << std::endl;
    std::cout << "Vector added with the addition vector:" << std::endl;
    PrintVector((vector + additionVector));
    std::cout << std::endl << std::endl;

    Vector3D subtractionVector(2.7f, 3.5, 0.0f);
    std::cout << "Subtraction vector created.";
    PrintVector(subtractionVector);
    std::cout << std::endl;
    std::cout << "Vector subtracted with the subtraction vector:" << std::endl;
    PrintVector((vector - subtractionVector));
    std::cout << std::endl << std::endl;

    return 0;
}