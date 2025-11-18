#include "GerenteService.h"

void GerenteService::cadastrarGerente(const Gerente &gerente) {
    gerentes.push_back(gerente);
}

vector<Gerente> GerenteService::listarGerentes() const {
    return gerentes;
}

void GerenteService::removerGerente(const Email &email) {
    for (auto it = gerentes.begin(); it != gerentes.end(); ++it) {
        if (it->getEmail().getValor() == email.getValor()) {
            gerentes.erase(it);
            return;
        }
    }
    throw invalid_argument("Gerente não encontrado para remoção.");
}

bool GerenteService::autenticarGerente(const Email &email, const Senha &senha) {
    for (const auto &g : gerentes) {
        if (g.getEmail().getValor() == email.getValor() &&
            g.getSenha().getValor() == senha.getValor()) {
            return true;
        }
    }
    return false;
}
