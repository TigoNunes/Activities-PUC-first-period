class Player {

private:
int HP = 3200;
    int MP = 30;
    int manaForce = 20;
    int physDamage = 80;
    int physResist = 80;
    int manaResist = 20;
    int agility = 50; 
    public:

    Player(int HP, int MP, int manaForce, int physDamage, int physResist, int manaResist, int agility);
     int exibeHP();
     int exibeMP();
     int executaDanoFisico(int danoArmaMinimo, int danoArmaMaximo);
     int executaDanoMagico(int danoFeitico, int gastoMP);
     int recebeDanoFisico(int danoTotal);
     int recebeDanoMagia(int danoTotal);
     int chanceEsquiva ();
     void imprimeStatus ();
     int bul_khatos();

};