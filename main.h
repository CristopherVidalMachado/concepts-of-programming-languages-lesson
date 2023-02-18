typedef struct {
    double x1;
    double x2;
} quadratic;



/*
 * Calculates the area of a circle.
 * @param radius The radius of the circle.
 * @return The area of the circle.
 */
double area(double radius);

/*
 * Calculates the diameter of a circle.
 * @param radius The radius of the circle.
 * @return The diameter of the circle.
 */
double diameter(double radius);

/*
 * Calculates the circumference of a circle.
 * @param radius The radius of the circle.
 * @return The circumference of the circle.
 */
double circumference(double radius);

/*
 * Calculates the roots of a quadratic equation.
 * @param a The coefficient of x^2.
 * @param b The coefficient of x.
 * @param c The constant.
 * @return A structure containing the two roots of the quadratic equation.
 */
quadratic quadratic_equation(double a, double b, double c);

/*
 * Swaps two integers.
 * @param a A pointer to the first integer.
 * @param b A pointer to the second integer.
 */
void swap(int *a, int *b);


