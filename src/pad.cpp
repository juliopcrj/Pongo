
class Pad
{
	private:
		int posx, posy;
		int sizex, sizey;
		int maxx, maxy;

	public:
		Pad(int _posx, int _posy, int _maxx, int _maxy){
			this->maxx = _maxx;
			this->maxy = _maxy;
			this->posx = _posx;
			this->posy = _posy;
		}

		void MovePad(int direction){
			if((direction < 0 && posy > 0) ||
				(direction > 0 && posy + sizey < maxy))
				posy += direction;
		}

		void get_coords(int *_posx, int *_posy){
			*_posx = this->posx;
			*_posy = this->posy;
		}

		void get_size(int *_sizex, int *_sizey){
			*_sizex = this->sizex;
			*_sizey = this->sizey;
		}

};
