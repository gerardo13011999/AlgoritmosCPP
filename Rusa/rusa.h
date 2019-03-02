#ifndef RUSA_H_INCLUDED
#define RUSA_H_INCLUDED

class rusa {
    private:
        int multiplicando;
        int multiplicador;
        int resultado;
    public:
        rusa();
        void setDatos(int x, int y);
        int getMultiplicando();
        int getMultiplicador();
        int getResutado();
};

#endif // RUSA_H_INCLUDED
