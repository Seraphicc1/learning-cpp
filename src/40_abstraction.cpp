#include <iostream>

class videogame
{
    public:
        videogame(int fps)
        {
            setfps(fps);
        }

        int getfps()
        {
            return fps;
        }

        void setfps(int fps)
        {
            if(fps < 0)
            {
                this->fps = 0;
            }
            else
            {
                this->fps = fps;
            }
        }

    private:
        int fps = 60;
};

int main()
{
    videogame gta6(144);

    // gta6.setfps(240);

    std::cout << "Your fps is: " << gta6.getfps() << std::endl;

    return 0;
}