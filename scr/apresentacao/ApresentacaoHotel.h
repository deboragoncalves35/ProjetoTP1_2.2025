#ifndef APRESENTACAOHOTEL_H_INCLUDED
#define APRESENTACAOHOTEL_H_INCLUDED

#include "..\scr\interfaces\IHotelService.h"
#include "../entidade/Hotel.h"
#include <vector>
#include <iostream>

class ApresentacaoHotel {
private:
    IHotelService* hotelService;
public:
    ApresentacaoHotel(IHotelService* service) : hotelService(service) {}
    void cadastrarHotel();
    void listarHoteis();
    void removerHotel();
    void executar();
};

#endif

