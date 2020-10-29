struct Vector3D
{
    float x, y, z;

    Vector3D() = default;
    Vector3D(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
    }

    float operator[](int i)
    {
        return ((&x)[i]);
    }

    const float operator[](int i) const
    {
        return ((&x)[i]);
    }

    Vector3D operator*=(float s)
    {
        x *= s;
        y *= s;
        z *= s;
        return (*this);
    }

    Vector3D operator/=(float s)
    {
        s = 1.0F / s;
        x *= s;
        y *= s;
        z *= s;
        return (*this);
    }
};