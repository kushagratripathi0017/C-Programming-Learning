#include <stdio.h>   // Standard Input Output library (printf aur scanf ke liye)
#include <math.h>    // Math library (pow() function use karne ke liye)

int main() {
    // 3 variables banaye: base (a), power (b), aur answer store karne ke liye (result)
    // double ka use kiya hai taki point wali values bhi handle ho sakein
    double a, b, result;

    // User se base value (a) input mangne ke liye
    printf("Enter base (a): ");
    // %lf double variable ke liye format specifier hai, &a ka matlab 'a' ke address par value save karo
    scanf("%lf", &a);
    
    // User se power value (b) input mangne ke liye
    printf("Enter power (b): ");
    scanf("%lf", &b);

    // pow(base, exponent) function a ki power b compute karega (jaise a^b)
    // Jo bhi answer aayega, wo result naam ke variable mein save ho jayega
    result = pow(a, b);

    // %.2lf ka matlab hai ki point (.) ke baad sirf 2 digits tak answer dikhana hai
    printf("%.2lf raised to the power of %.2lf is: %.2lf\n", a, b, result);

    // Screen ko turant band hone se rokne ke liye (agar direct .exe file chalao toh)
    printf("\nPress Enter to exit...");
    getchar(); // Ye pichle scanf ke 'Enter' key ko consume (saaf) karega
    getchar(); // Ye screen ko hold karke rakhega jab tak aap dobara Enter nahi dabate

    return 0; // Matlab program successfully bina kisi error ke poora ho gaya
}