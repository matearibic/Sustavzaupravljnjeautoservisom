#ifndef HEADER_H
#define HEADER_H

#define NAME 20
#define SURNAME 30
#define PHONE 20
#define MAIL 50
#define MADE 20
#define MODEL 50
#define REGIST 15
#define DESCRIBE 255
#define DATE 11
#define REPAIR 50
#define PARTS 255
#define USER 20
#define PASSWORD 20


typedef enum {
    IZLAZ = 0,
    OPCIJE_KLIJENATA = 1,
    OPCIJE_VOZILA,
    OPCIJE_POPRAVAKA,
    ODJAVA_ADMINA
} GlavniIzbornik;

typedef enum {
    REGISTRACIJA_ADMINA = 1,
    PRIJAVA_ADMINA,
    IZLAZ_PROGRAMA
} PocetniIzbornik;

typedef enum {
    POVRATAK_KLIJENTI = 0,
    NOVI_KLIJENT = 1,
    ISPISI_KLIJENTE,
    SORTIRAJ_KLIJENTE,
    PRETRAZI_KLIJENTA,
    AZURIRAJ_KLIJENTA,
    OBRISI_KLIJENTA,
    OBRISI_DATOTEKU_KLIJENATA
} KlijentiIzbornik;

typedef enum {
    POVRATAK_VOZILA = 0,
    NOVO_VOZILO = 1,
    ISPISI_VOZILA,
    POVIJEST_VOZILA,
    SORTIRAJ_VOZILA,
    AZURIRAJ_REGISTRACIJU,
    OBRISI_VOZILO,
    OBRISI_DATOTEKU_VOZILA
} VozilaIzbornik;

typedef enum {
    POVRATAK_POPRAVAKA = 0,
    NOVI_POPRAVAK = 1,
    ISPIS_POPRAVAKA,
    UKUPNI_TROSAK_POPRAVAKA,
    UKUPNI_TROSAK_GODINA,
    SORTIRAJ_POPRAVKE,
    OBRISI_DATOTEKU_POPRAVAKA
} PopravciIzbornik;


extern void prikaziGlavniIzbornik();
extern void prikaziIzbornikKlijenata();
extern void prikaziIzbornikVozila();
extern void prikaziIzbornikPopravaka();

typedef struct {
	int id;
	char marka[MADE];
	char model[MODEL];
	char registracija[REGIST];
	int godinaProizvodnje;
} Vozilo;

typedef struct {
	int id;
	char ime[NAME];
	char prezime[SURNAME];
	char telefon[PHONE];
	char email[MAIL];
} Klijent;

typedef struct {
	int id;
	int idVozila;
	int idKlijenta;
	char opis[DESCRIBE];
	double cijena;
	char datum[DATE];
	char dijelovi[PARTS];
} Popravak;

typedef struct {
	char korisnickoIme[USER];
	char lozinka[PASSWORD];
} Administrator;


//Vozila
extern void unosNovogVozila();
extern void ispisiVozila();
extern void povijestVozila();
extern void azurirajRegistracijuVozila();
extern void obrisiVoziloUI();
extern void obrisiVozila();
//Klijenti
extern void unosNovogKlijenta();
extern void ispisiKlijente();
extern void azurirajKlijentaUI();
extern void obrisiKlijentaUI();
extern void obrisiKlijente();

//Popravak
extern void noviPopravak();
extern void ispisPopravaka();
extern void ukupniTrosakPopravaka();
extern void ukupniTrosakPopravakaZaGodinu();
extern void obrisiPopravke();

//Sortiranje
extern void sortirajKlijente();
extern void sortirajVozila();
extern void sortirajPopravke();

//Pretrazivanje
extern void pretraziIKlijenta();

//Admin
extern void globalnaRegistracijaAdmin();
int globalnaPrijavaAdmin();
int globalnaOdjavaAdmin();
extern void ocistiUlazniSpremnik();

#endif
