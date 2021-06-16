#ifndef JUNGLE_ANIMAL_H
#define JUNGLE_ANIMAL_H


class Animal {
private:
    double x;
    double y;

public:
    Animal();
    virtual void fall();
    void setPosition(double x, double y);
    void move(const double& x,const double& y);

    double getX() const;
    double getY() const;

    bool isInPit(double x, double y , double r) const;
};


#endif //JUNGLE_ANIMAL_H
