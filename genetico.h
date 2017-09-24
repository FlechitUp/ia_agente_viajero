#ifndef GENETICO_H
#define GENETICO_H


class genetico
{
    public:
        genetico(int poblacion, double prob_cruzam, double prob_mutac );
        //virtual ~genetico();
        void seleccion();
        void generar_nueva_poblacion();


    protected:

    private:
};

#endif // GENETICO_H
