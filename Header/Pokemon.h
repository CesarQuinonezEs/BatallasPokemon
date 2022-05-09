class Pokemon : public Object
{
private:
    /* data */
public:
    Pokemon(/* args */);
    ~Pokemon();
    const void action();
    void Presentacion();
};

Pokemon::Pokemon(/* args */)
{
    this->set_sprite("Pokemones");
    this->w = 112;
    this->h = 112;
    this->x = SCREEN_W + 124;
    this->y = 124;
    this->index = 8;
    this->seccion = 10;
}

Pokemon::~Pokemon()
{
}


const void Pokemon::action(){
    this->animated(1);
    this->Presentacion();
}

void Pokemon::Presentacion(){
    if(this->x > SCREEN_W - 204)
        x-=3;
}
