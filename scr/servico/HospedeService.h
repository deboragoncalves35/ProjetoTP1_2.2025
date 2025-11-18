#ifndef HOSPEDESERVICE_H_INCLUDED
#define HOSPEDESERVICE_H_INCLUDED

#include "../interfaces/IHospedeService.h"
#include <vector>
#include <stdexcept>

using namespace std;

/**
 * @class HospedeService
 * @brief Implementa os serviços definidos na interface IHospedeService.
 *
 * Responsável por gerenciar o cadastro, listagem e remoção de hóspedes.
 * Armazena os hóspedes em memória usando um vetor (std::vector).
 */
class HospedeService : public IHospedeService {
private:
    vector<Hospede> hospedes; ///< Armazena os hóspedes cadastrados.

public:
    /**
     * @brief Cadastra um novo hóspede no sistema.
     * @param hospede Instância de Hospede a ser cadastrada.
     * @throw invalid_argument Se já existir um hóspede com o mesmo cartão.
     */
    void cadastrarHospede(const Hospede &hospede) override;

    /**
     * @brief Retorna a lista de todos os hóspedes cadastrados.
     * @return Vetor contendo objetos da classe Hospede.
     */
    vector<Hospede> listarHospedes() const override;

    /**
     * @brief Remove um hóspede com base no cartão.
     * @param cartao Instância de Cartao representando o hóspede.
     * @throw invalid_argument Se o hóspede não for encontrado.
     */
    void removerHospede(const Cartao &cartao) override;
};

#endif // HOSPEDESERVICE_H_INCLUDED
