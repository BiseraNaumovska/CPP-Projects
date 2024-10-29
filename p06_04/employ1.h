#ifndef EMPLOY1_H
#define EMPLOY1_H

class Employee{
public:
    Employee (const char*, const char*); // konstruktor
    ~Employee(); // destruktor
    const char *getFirstName() const;
    const char *getLastName() const;

    static int getCount();

private:
    char *firstName;
    char *lastName;

    static int count;

};

#endif // EMPLOY1_H
