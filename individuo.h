#ifndef INDIVIDUO_H
#define INDIVIDUO_H


class individuo
{
    public:
        individuo();
        //virtual ~individuo();
        void cruzamiento(individuo &B)const;
        double aptitud();


    protected:

    private:
};

#endif // INDIVIDUO_H
