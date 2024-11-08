namespace targets {
    // TODO: Insert the code for the alien class here
    class Alien {
    private:
        int health{ 3 };

    public:
        int x_coordinate{};
        int y_coordinate{};

        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_health() {
            return health;
        }
        int hit() {
            if (health > 0) {
                return health -= 1;
            }
            return true;
        }
        bool is_alive() {
            return health > 0;
        }
        int teleport(int x_new, int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true;
        }
        bool collision_detection(Alien alien) {
            return x_coordinate == alien.x_coordinate && y_coordinate == alien.y_coordinate;
        }
    };

}  // namespace targets