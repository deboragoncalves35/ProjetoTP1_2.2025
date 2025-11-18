#include "ApresentacaoHotel.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * @brief Cadastra um novo hotel no sistema.
 */
void ApresentacaoHotel::cadastrarHotel() {
    try {
        Hotel hotel;
        Nome nome;
        Endereco endereco;
        Telefone telefone;
        Codigo codigo;
        string entrada;

        cout << "\n=== Cadastro de Hotel ===\n";

        cout << "Digite o nome do hotel: ";
        getline(cin, entrada);
        nome.setValor(entrada);
        hotel.setNome(nome);

        cout << "Digite o endereço: ";
        getline(cin, entrada);
        endereco.setValor(entrada);
        hotel.setEndereco(endereco);

        cout << "Digite o telefone (+DDDDDDDDDDD): ";
        getline(cin, entrada);
        telefone.setValor(entrada);
        hotel.setTelefone(telefone);

        cout << "Digite o código (10 caracteres): ";
        getline(cin, entrada);
        codigo.setValor(entrada);
        hotel.setCodigo(codigo);

        hotelService->adicionarHotel(hotel);
        cout << "✅ Hotel cadastrado com sucesso!\n";

    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}

/**
 * @brief Lista todos os hotéis cadastrados.
 */
void ApresentacaoHotel::listarHoteis() {
    vector<Hotel> lista = hotelService->listarHoteis();

    cout << "\n=== HOTÉIS CADASTRADOS ===\n";
    if (lista.empty()) {
        cout << "Nenhum hotel cadastrado.\n";
        return;
    }

    for (const auto &h : lista) {
        cout << "Nome: " << h.getNome().getValor() << endl;
        cout << "Endereço: " << h.getEndereco().getValor() << endl;
        cout << "Telefone: " << h.getTelefone().getValor() << endl;
        cout << "Código: " << h.getCodigo().getValor() << endl;
        cout << "-----------------------------\n";
    }
}

/**
 * @brief Remove um hotel com base no código informado.
 */
void ApresentacaoHotel::removerHotel() {
    try {
        Codigo codigo;
        string entrada;

        cout << "\n=== Remover Hotel ===\n";
        cout << "Digite o código do hotel a remover: ";
        getline(cin, entrada);
        codigo.setValor(entrada);

        hotelService->removerHotel(codigo);
        cout << "✅ Hotel removido com sucesso!\n";

    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}

/**
 * @brief Exibe o menu da camada de apresentação do módulo Hotel.
 */
void ApresentacaoHotel::executar() {
    int opcao = -1;

    do {
        cout << "\n=== MENU HOTEL ===\n";
        cout << "1. Cadastrar hotel\n";
        cout << "2. Listar hotéis\n";
        cout << "3. Remover hotel\n";
        cout << "0. Voltar\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cadastrarHotel();
                break;
            case 2:
                listarHoteis();
                break;
            case 3:
                removerHotel();
                break;
            case 0:
                cout << "Retornando ao menu principal...\n";
                break;
            default:
                cout << "❌ Opção inválida!\n";
        }
    } while (opcao != 0);
}
