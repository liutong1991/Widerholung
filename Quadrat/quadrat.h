#ifndef QUADRAT_H
#define QUADRAT_H


class Quadrat
{
public:
    Quadrat();
    void setLaenge(int laenge);
    int getLaenge();
    int getFlaeche();
private:
    int m_laenge;
};

#endif // QUADRAT_H
