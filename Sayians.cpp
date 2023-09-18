#include <iostream>
using namespace std;

// Base class representing Saiyans
class Sayian {
public:
    float power;
    string race = "Saiyan"; // Corrected spelling to "Saiyan"

    // Constructor to initialize power
    Sayian(float initialPower) {
        power = initialPower;
    }

    // Super Saiyan transformation method
    float superSayain(float powerMultiplier) {
        this->power *= powerMultiplier;
        return this->power;
    }
};

// Derived class representing Goku, inherits from Sayian
class Goku : public Sayian {
public:
    string specialMove;

    // Constructor to initialize Goku's data
    Goku(float initialPower, const string& move)
        : Sayian(initialPower), specialMove(move) {}
};

// Derived class representing Vegeta, inherits from Sayian
class Vegeta : public Sayian {
public:
    string specialMove;

    // Constructor to initialize Vegeta's data
    Vegeta(float initialPower, const string& move)
        : Sayian(initialPower), specialMove(move) {}
};
class Broly : public Sayian {
    public:
        string specialMove;

    // Constructor to initialize Vegeta's data
    Broly(float initialPower, const string& move)
        : Sayian(initialPower), specialMove(move) {}

    // Legendary Super Saiyan transformation method
    float legendarySuperSayain(float powerMultiplier) {
        this->power *= powerMultiplier;
        return this->power;
    }
};

int main() {
    // Create a Goku instance with initial power and special move
    Goku goku(500, "Kamehameha");
    Vegeta vegeta(490, "Star killer");
    Broly broly(1000, "Mouth Ki Blast");

    // Output Goku's information
    cout << "Goku is a " << goku.race << "\n";
    cout << "Goku base power is " << goku.power << "\n";
    cout << "Goku special move is called " << goku.specialMove << "\n";

    // Trigger Super Saiyan transformation for Goku with a power multiplier of 50
    float gokuSuperSaiyanPower = goku.superSayain(50);
    cout << "Goku Super Saiyan power is " << gokuSuperSaiyanPower << "\n";

    cout << "\n";
    
    // Output Vegeta's information
    cout << "Vegeta is a " << vegeta.race << "\n";
    cout << "Vegeta base power is " << vegeta.power << "\n";
    cout << "Vegeta special move is called " << vegeta.specialMove << "\n";

    // Trigger Super Saiyan transformation for Vegeta with a power multiplier of 50
    float vegetaSuperSaiyanPower = vegeta.superSayain(50);
    cout << "Vegeta Super Saiyan power is " << vegetaSuperSaiyanPower << "\n";

    cout << "\n";
    
    // Output Broly's information
    cout << "Broly is a " << broly.race << "\n";
    cout << "Broly base power is " << broly.power << "\n";
    cout << "Broly special move is called " << broly.specialMove << "\n";

    // Trigger Super Saiyan transformation for Vegeta with a power multiplier of 50
    float superBroly = broly.legendarySuperSayain(500);
    cout << "Broly Super Saiyan power is " << superBroly << "\n";

    return 0;
}
