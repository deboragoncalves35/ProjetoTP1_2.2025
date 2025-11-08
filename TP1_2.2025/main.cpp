#include <iostream>
#include <string>
#include "entidade/Gerente.h"
#include "entidade/Hotel.h"
#include "entidade/Quarto.h"
#include "entidade/Hospede.h"
#include "entidade/Reserva.h"
using namespace std;

int main() {
    try {
        cout << "=== TESTE FUMACA - SISTEMA DE HOTEL ===" << endl;

        // ========== GERENTE ==========
        cout << "\n--- Cadastro do Gerente ---" << endl;
        Gerente gerente;
        Nome nomeGerente;
        Email emailGerente;
        Ramal ramal;
        Senha senha;
        string entrada;

        cout << "Nome do gerente: ";
        getline(cin, entrada);
        nomeGerente.setValor(entrada);
        gerente.setNome(nomeGerente);

        cout << "Email do gerente: ";
        getline(cin, entrada);
        emailGerente.setValor(entrada);
        gerente.setEmail(emailGerente);

        cout << "Ramal (00 a 50): ";
        getline(cin, entrada);
        ramal.setValor(entrada);
        gerente.setRamal(ramal);

        cout << "Senha (5 caracteres): ";
        getline(cin, entrada);
        senha.setValor(entrada);
        gerente.setSenha(senha);

        cout << "\n✅ Gerente cadastrado com sucesso!\n";

        // ========== HOTEL ==========
        cout << "\n--- Cadastro do Hotel ---" << endl;
        Hotel hotel;
        Nome nomeHotel;
        Endereco enderecoHotel;
        Telefone telefoneHotel;
        Codigo codigoHotel;

        cout << "Nome do hotel: ";
        getline(cin, entrada);
        nomeHotel.setValor(entrada);
        hotel.setNome(nomeHotel);

        cout << "Endereco do hotel: ";
        getline(cin, entrada);
        enderecoHotel.setValor(entrada);
        hotel.setEndereco(enderecoHotel);

        cout << "Telefone (+DDDDDDDDDDDDD): ";
        getline(cin, entrada);
        telefoneHotel.setValor(entrada);
        hotel.setTelefone(telefoneHotel);

        cout << "Codigo do hotel (10 caracteres): ";
        getline(cin, entrada);
        codigoHotel.setValor(entrada);
        hotel.setCodigo(codigoHotel);

        hotel.setGerente(gerente);

        cout << "\n✅ Hotel cadastrado com sucesso!\n";

        // ========== QUARTO ==========
        cout << "\n--- Cadastro do Quarto ---" << endl;
        Quarto quarto;
        Numero numero;
        Capacidade capacidade;
        Dinheiro diaria;
        Ramal ramalQuarto;

        cout << "Numero do quarto (001 a 999): ";
        getline(cin, entrada);
        numero.setValor(entrada);
        quarto.setNumero(numero);

        cout << "Capacidade (1, 2, 3 ou 4): ";
        getline(cin, entrada);
        int valorCapacidade = stoi(entrada); // 🔹 conversão corrigida
        capacidade.setValor(valorCapacidade);
        quarto.setCapacidade(capacidade);

        cout << "Diaria (1 a 1000000): ";
        getline(cin, entrada);
        diaria.setValor(entrada);
        quarto.setDiaria(diaria);

        cout << "Ramal do quarto (00 a 50): ";
        getline(cin, entrada);
        ramalQuarto.setValor(entrada);
        quarto.setRamal(ramalQuarto);

        hotel.adicionarQuarto(quarto);
        cout << "\n✅ Quarto adicionado ao hotel!\n";

        // ========== HOSPEDE ==========
        cout << "\n--- Cadastro do Hospede ---" << endl;
        Hospede hospede;
        Nome nomeHospede;
        Email emailHospede;
        Endereco enderecoHospede;
        Cartao cartao;

        cout << "Nome do hospede: ";
        getline(cin, entrada);
        nomeHospede.setValor(entrada);
        hospede.setNome(nomeHospede);

        cout << "Email do hospede: ";
        getline(cin, entrada);
        emailHospede.setValor(entrada);
        hospede.setEmail(emailHospede);

        cout << "Endereco do hospede: ";
        getline(cin, entrada);
        enderecoHospede.setValor(entrada);
        hospede.setEndereco(enderecoHospede);

        cout << "Numero do cartao (16 digitos): ";
        getline(cin, entrada);
        cartao.setValor(entrada);
        hospede.setCartao(cartao);

        cout << "\n✅ Hospede cadastrado com sucesso!\n";

        // ========== RESERVA ==========
        cout << "\n--- Criacao da Reserva ---" << endl;
        Reserva reserva;
        Data chegada, partida;
        Dinheiro valorReserva;
        Codigo codigoReserva;

        cout << "Data de chegada (ex: 05-MAI-2025): ";
        getline(cin, entrada);
        chegada.setValor(entrada);
        reserva.setChegada(chegada);

        cout << "Data de partida (ex: 10-MAI-2025): ";
        getline(cin, entrada);
        partida.setValor(entrada);
        reserva.setPartida(partida);

        cout << "Valor da reserva (1 a 1000000): ";
        getline(cin, entrada);
        valorReserva.setValor(entrada);
        reserva.setValor(valorReserva);

        cout << "Codigo da reserva (10 caracteres): ";
        getline(cin, entrada);
        codigoReserva.setValor(entrada);
        reserva.setCodigo(codigoReserva);

        reserva.setHospede(hospede);
        reserva.setQuarto(quarto);

        cout << "\n✅ Reserva registrada com sucesso!\n";

        // ========== RESUMO ==========
        cout << "\n===== RESUMO GERAL =====" << endl;
        cout << "Hotel: " << hotel.getNome().getValor() << endl;
        cout << "Gerente: " << hotel.getGerente().getNome().getValor() << endl;
        cout << "Quarto numero: " << quarto.getNumero().getValor() << endl;
        cout << "Hospede: " << hospede.getNome().getValor() << endl;
        cout << "Reserva codigo: " << reserva.getCodigo().getValor() << endl;

        cout << "\n🎉 TESTE FUMACA CONCLUIDO COM SUCESSO! 🎉\n";

    } catch (invalid_argument &e) {
        cout << "\n❌ Erro: " << e.what() << endl;
    } catch (...) {
        cout << "\n❌ Erro inesperado!" << endl;
    }

    return 0;
}
9
