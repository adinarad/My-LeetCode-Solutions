class ParkingSystem {
    int space[3];
public:
    ParkingSystem(int big, int medium, int small) {
        space[0] = big;
        space[1] = medium;
        space[2] = small;
    }
    
    bool addCar(int carType) {
        --carType;
        if(space[carType]>0){
            --space[carType];
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */