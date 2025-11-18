#include "ApresentacaoHospede.h"
using namespace std;

void ApresentacaoHospede::cadastrarHospede() {
    try {
        Hospede hospede;
        Nome nome;
        Endereco endereco;
        Cartao cartao;
        string entrada;

        cout << "\nDigite o nome do hóspede: ";
        getline(cin, entrada);
        nome.setValor(entrada);
        hospede.setNome(nome);

        cout << "Digite o endereço: ";
        getline(cin, entrada);
        endereco.setValor(entrada);
        hospede.setEndereco(endereco);

        cout << "Digite o número do cartão: ";
        getline(cin, entrada);
        cartao.setValor(entrada);
        hospede.setCartao(cartao);

        hospedeService->cadastrarHospede(hospede);
        cout << "✅ Hóspede cadastrado com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}

void ApresentacaoHospede::listarHospedes() {
    vector<Hospede> lista = hospedeService->listarHospedes();

    cout << "\n=== HÓSPEDES CADASTRADOS ===\n";
    if (lista.empty()) {
        cout << "Nenhum hóspede cadastrado.\n";
        return;
    }

    for (const auto &h : lista) {
        cout << "Nome: " << h.getNome().getValor() << endl;
        cout << "Endereço: " << h.getEndereco().getValor() << endl;
        cout << "Cartão: " << h.getCartao().getValor() << endl;
        cout << "-----------------------------\n";
    }
}

void ApresentacaoHospede::removerHospede() {
    try {
        Cartao cartao;
        string entrada;

        cout << "Digite o número do cartão a remover: ";
        getline(cin, entrada);
        cartao.setValor(entrada);

        hospedeService->removerHospede(cartao);
        cout << "✅ Hóspede removido com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}
void ApresentacaoHospede::executar() {
    int opcao = -1;

    do {
        cout << "\n=== MENU HÓSPEDE ===\n";
        cout << "1. Cadastrar hóspede\n";
        cout << "2. Listar hóspedes\n";
        cout << "3. Remover hóspede\n";
        cout << "0. Voltar\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cadastrarHospede();
                break;
            case 2:
                listarHospedes();
                break;
            case 3:
                removerHospede();
                break;
            case 0:
                cout << "Retornando ao menu principal...\n";
                break;
            default:
                cout << "❌ Opção inválida!\n";
        }
    } while (opcao != 0);
}

