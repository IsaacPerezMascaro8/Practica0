#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico{
        private:
                double x,y,z;
                bool sujetandoObjeto;
        public:

                BrazoRobotico(double x,double y,double z);
                double get_x();
                double get_y();
                double get_z();
                bool get_SujetandoObjeto();
                void coger();
                void soltar();
                void mover(double x,double y,double z);


};

#endif

