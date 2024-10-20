#ifndef CENTRALEDALARME_H
#define CENTRALEDALARME_H

#include <QObject>

class Clavier;


class CentraleDalarme : public QObject
{
    Q_OBJECT
public:
    explicit CentraleDalarme(const int _tailleCode = 4, QObject *parent = nullptr);
    ~CentraleDalarme();
    void FabriquerCode(const quint8 _chiffre);
    //friend QDebug operator<<(QDebug debug, const CentraleDalarme &_centrale);

signals:
    void EtatCentralChange(MODES_DE_MARCHE _nouvelEtat);


public slots:
    void onTimerDelai_timeout();
    void onIntrusDetecte();

private:
    const int tailleCode;
    quint8 *combinaison;
    int indiceCourant;
    Clavier *leClavier;
};

#endif // CENTRALEDALARME_H
