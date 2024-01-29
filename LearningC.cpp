#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
        
    }


};

int main(){
    Stove stove;

    //stove.temperature = 10000000000;

    stove.setTemperature(0.5);
    
    std::cout << "The temperature setting is: " << stove.getTemperature();
}
void fege(){
    //how to add a cool command
}