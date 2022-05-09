class Animation : public Object
{
private:
    int _y;
    int _x;
    BITMAP* pokeball;
    int cont;
public:
    Animation();
    ~Animation();
    const void action();
};
Animation :: Animation(){
this->set_sprite("Presentation");
this->x = 130;
this ->y = SCREEN_H - sprite->h;
this->fps = 30;
this->w = sprite->w / 4;
this->pokeball = load_bitmap("img/Pokeball.bmp",NULL);
this->_x = 130;
this->_y = SCREEN_H - sprite->h;
this->cont = 0;
}
Animation::~Animation(){
}

const void Animation::action(){
if(this->endAnimation()){
    this->fps = 0;
    x-=2;
    cont < 261 ? cont += 6 : cont = 0;
    //cout<<"el numero es: "<<cont;
    rotate_sprite(lienzo,pokeball,_x + 180,_y,ftofix(cont));
}
if(this->x < -200){
    Remove.push_back(this);

}
this->animated(0);

}
