#define MAX_SPEED 10
#include <cmath>

class Ball
{
	private:
		int posx, posy;
		int radius;
		int speedx, speedy;

	public:

		Ball(int _posx, int _posy, int _radius, int _speedx, int _speedy){
			this->posx = _posx;
			this->posy = _posy;
			this->radius = _radius;
			this->speedx = _speedx;
			this->speedy = _speedy;
		}

		void Ricochet(int _factor){
			this->speedx = (int)(cos((double)_factor)*MAX_SPEED);
			this->speedy = (int)(sin((double)_factor)*MAX_SPEED);
		}

		void get_coords(int *_posx, int *_posy){
			*_posx = this->posx;
			*_posy = this->posy;
		}

		void get_size(int *_radius){
			*_radius = this->radius;
		}
};
