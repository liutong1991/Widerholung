#include "quadrat.h"

Quadrat::Quadrat()
{

}

int Quadrat::getLaenge()
{
    return m_laenge;
}

void Quadrat::setLaenge(int laenge)
{
    m_laenge=laenge;
}

int Quadrat::getFlaeche()
{
    return m_laenge*m_laenge;
}
