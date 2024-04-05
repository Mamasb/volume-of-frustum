# Frustum Volume Calculator

This is a simple C program that calculates the volume of a frustum of a cone based on user input for the radii of the larger and smaller bases and the height of the frustum.

## Formula

The formula for calculating the volume \( V \) of a frustum of a cone is:

\[ V = \frac{1}{3} \pi h (R^2 + r^2 + Rr) \]

Where:

- \( R \) is the radius of the larger base of the frustum,
- \( r \) is the radius of the smaller base of the frustum,
- \( h \) is the height of the frustum.

This formula derives from the formula for the volume of a cone.

## How to Use

1. Clone the repository to your local machine.
2. Compile the C program using a C compiler such as GCC:
gcc -o frustum_volume frustum_volume.c -lm

vbnet
Copy code
Note: The `-lm` flag is used to link the math library.
3. Run the compiled executable:
./frustum_volume

css
Copy code
4. Follow the on-screen prompts to enter the radii of the larger and smaller bases and the height of the frustum.
5. The program will calculate and display the volume of the frustum.

## Example

Enter the radius of the larger base (R): 5
Enter the radius of the smaller base (r): 3
Enter the height of the frustum (h): 8
Volume of the frustum: 235.62

markdown
Copy code

## Quiz

1. What is the formula for calculating the volume of a frustum of a cone?
   - A) \( V = \pi R^2 h \)
   - B) \( V = \frac{1}{3} \pi h (R^2 + r^2 + Rr) \)
   - C) \( V = \frac{1}{3} \pi h (R^2 - r^2) \)
   - D) \( V = \frac{1}{2} \pi R h \)

2. What does \( R \) represent in the formula?
   - A) Height of the frustum
   - B) Radius of the larger base
   - C) Radius of the smaller base
   - D) Volume of the frustum

3. Which mathematical constant is used in the formula?
   - A) Euler's number
   - B) Phi (\( \phi \))
   - C) Pi (\( \pi \))
   - D) Gamma function

4. How is the volume of the frustum related to the radii of the larger and smaller bases?
   - A) Directly proportional
   - B) Inversely proportional
   - C) Unrelated
   - D) Quadratically related

5. What is the purpose of the `-lm` flag when compiling the C program?
   - A) Linking the math library
   - B) Creating a static library
   - C) Specifying the main function
   - D) Enabling optimization

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details