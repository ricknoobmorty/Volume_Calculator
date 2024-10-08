#include <stdio.h>

#define pi 3.14159265359

//function prototypes
void cubevol(float);
void cuboidvol(float, float, float);
void spherevol(float);
void cylindervol(float, float);
void conevol(float, float);


//function definitions
void cubevol(float l)
{
    sizeof(int);
    float volume = l * l * l;
    printf("The volume of cube is %.2f\n", volume);
}

void cuboidvol(float l, float b, float h)
{
    float volume = l * b * h;
    printf("The volume of coboid is %.2f\n", volume);
}

void spherevol(float r)
{
    float volume = (4.0 / 3.0) * pi * (r * r * r);
    printf("The volume of sphere is %.2f\n", volume);
}

void cylindervol(float h, float r)
{
    float volume = pi * (r * r) * h;
    printf("The volume of cylinder is %.2f\n", volume);
}

void conevol(float h, float r)
{
    float volume = (1.0 / 3.0) * pi * (r * r) * h;
    printf("The volume of cone is %.2f\n", volume);
}

int main()
{
    float length;
    float height;
    int shape;
    float breadth;
    float radius;
    int choice;

    printf("WELCOME TO THE VOLUME CALCULATOR\nPlease enter the corresponding number of the shape you want to calculate volume of\n");
volumecalc:
    printf("1.Cube\n2.Cuboid\n3.Sphere\n4.Cylinder\n5.Cone\n");
    scanf("%d", &shape);

    if (shape == 1)
    {
        printf("Please enter the length of the cube\n");
        scanf("%f", &length);
        cubevol(length);
        printf("\nDo you want to continue 1/0\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nChoose the shape\n");
            goto volumecalc;
        }
        else
        {
            goto end;
        }
    }
    else if (shape == 2)
    {
        printf("Please enter the length of the cuboid\n");
        scanf("%f", &length);
        printf("Please enter the breadth of the cuboid\n");
        scanf("%f", &breadth);
        printf("Please enter the height of the cuboid\n");
        scanf("%f", &height);
        cuboidvol(length, breadth, height);
        printf("\nDo you want to continue 1/0\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nChoose the shape\n");
            goto volumecalc;
        }
        else
        {
            goto end;
        }
    }
    else if (shape == 3)
    {
        printf("Please enter the radius of the sphere\n");
        scanf("%f", &radius);
        spherevol(radius);
        printf("\nDo you want to continue 1/0\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nChoose the shape\n");
            goto volumecalc;
        }
        else
        {
            goto end;
        }
    }
    else if (shape == 4)
    {
        printf("Please enter height of the cylinder\n");
        scanf("%f", &height);
        printf("Please enter radius of the cylinder\n");
        scanf("%f", &radius);
        cylindervol(height, radius);
        printf("\nDo you want to continue 1/0\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nChoose the shape\n");
            goto volumecalc;
        }
        else
        {
            goto end;
        }
    }
    else if (shape == 5)
    {
        printf("Please enter height of the cone\n");
        scanf("%f", &height);
        printf("Please enter the radius of the cone\n");
        scanf("%f", &radius);
        conevol(height, radius);
        printf("\nDo you want to continue 1/0\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nChoose the shape\n");
            goto volumecalc;
        }
        else
        {
            goto end;
        }
    }
    else
    {
        printf("\n");
        printf("\nPlease enter the number from the given options\n");
        goto volumecalc;
    }

end:
    printf("Bye!, See you soon.\n");

    return 0;
}