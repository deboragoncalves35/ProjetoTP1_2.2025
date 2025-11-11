#ifndef IHOTELSERVICE_H
#define IHOTELSERVICE_H

#include "../entidade/Hotel.h"
#include <vector>

/**
 * @brief Interface responsável pelos serviços de Hotel.
 */
class IHotelService {
public:
    virtual void adicionarHotel(const Hotel&) = 0;
    virtual std::vector<Hotel> listarHoteis() const = 0;
    virtual void removerHotel(const Codigo&) = 0;
    virtual ~IHotelService() {}
};

#endif
