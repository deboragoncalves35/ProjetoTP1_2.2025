#include <iostream>
#include "dominio/Telefone.h"
#include "dominio/Senha.h"
#include "dominio/Email.h"
#include "dominio/Codigo.h"
#include "entidade/Hotel.h"
#include "interfaces/IHotelService.h"
#include "interfaces/IQuartoService.h"
#include "interfaces/IReservaService.h"
#include "interfaces/IHospedeService.h"
#include "interfaces/IGerenteService.h"

int main() {
    std::cout << "✅ Teste de compilação iniciado...\n";

    // Teste simples de domínio
    Telefone tel;
    tel.setValor("+5591987654321");
    std::cout << "Telefone válido: " << tel.getValor() << "\n";

    // Teste simples de entidade
    Hotel h;
    Nome n; n.setValor("Hotel Teste");
    Endereco e; e.setValor("Rua das Flores, 123");
    Codigo c; c.setValor("a1b2c3d4e5");
    Telefone t; t.setValor("+5511999999999");

    h.setNome(n);
    h.setEndereco(e);
    h.setCodigo(c);
    h.setTelefone(t);

    std::cout << "Hotel cadastrado: " << h.getNome().getValor() << "\n";
    std::cout << "✅ Todos os includes e classes funcionam!\n";

    return 0;
}
