#ifndef IRESERVASERVICE_H
#define IRESERVASERVICE_H

#include "../entidade/Reserva.h"
#include <vector>

/**
 * @brief Interface responsável pelos serviços de Reserva.
 */
class IReservaService {
public:
    /**
     * @brief Adiciona uma nova reserva ao sistema.
     * @param reserva Instância de Reserva a ser adicionada.
     */
    virtual void cadastrarReserva(const Reserva&) = 0;

    /**
     * @brief Retorna todas as reservas cadastradas.
     * @return Vetor contendo todas as reservas.
     */
    virtual std::vector<Reserva> listarReservas() const = 0;

    /**
     * @brief Remove uma reserva com base no código.
     * @param codigo Instância de Codigo identificando a reserva.
     */
    virtual void removerReserva(const Codigo&) = 0;

    virtual ~IReservaService() {}
};

#endif
