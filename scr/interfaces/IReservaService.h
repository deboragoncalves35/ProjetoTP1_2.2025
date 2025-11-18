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
<<<<<<< HEAD
    virtual void cadastrarReserva(const Reserva&) = 0;
=======
    virtual void adicionarReserva(const Reserva&) = 0;
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103

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
