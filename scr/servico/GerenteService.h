#ifndef GERENTESERVICE_H_INCLUDED
#define GERENTESERVICE_H_INCLUDED

#include <vector>
#include <stdexcept>
#include "../interfaces/IGerenteService.h"
#include "../entidade/Gerente.h"
#include "../dominio/Email.h"
#include "../dominio/Senha.h"

using namespace std;

/**
 * @class GerenteService
 * @brief Implementa os serviços definidos na interface IGerenteService.
 */
class GerenteService : public IGerenteService {
private:
    vector<Gerente> gerentes;

public:
    void cadastrarGerente(const Gerente&) override;
    vector<Gerente> listarGerentes() const override;
    void removerGerente(const Email &email) override;
    bool autenticarGerente(const Email &email, const Senha &senha) override;  // <=== FALTAVA ISSO
};

#endif
