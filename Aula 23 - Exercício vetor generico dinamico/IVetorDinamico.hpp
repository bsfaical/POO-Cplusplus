#ifndef _VETORGENDIN
#define _VETORGENDIN

template <typename T> class IVetorDinamico{
public:
    /**
     * @brief Destrutor
     * Garante que o destrutor da classe derivada seja chamado
     * corretamente ao deletar um objeto através de um ponteiro da classe base.
     */
    virtual ~IVetorDinamico() {}

    /**
     * @brief Adiciona um novo elemento ao final do vetor.
     * Se a capacidade atual não for suficiente, o vetor deve
     * ser redimensionado (crescer) antes da adição.
     * @param elemento O elemento a ser adicionado.
     */
    virtual void adicionar(T elemento) = 0;

    /**
     * @brief Retorna o número de elementos atualmente armazenados no vetor.
     * @return O elemento de elementos (tamanho).
     */
    virtual int obterTamanho() const = 0;

    /**
     * @brief Retorna a capacidade total de armazenamento do vetor no momento
     * (tamanho do array alocado Ternamente).
     * @return A capacidade total.
     */
    virtual int obterCapacidade() const = 0;

    /**
     * @brief Retorna o elemento localizado no índice especificado.
     * @param indice A posição do elemento desejado (baseado em zero).
     * @return Uma referência ao elemento no índice.
     */
    virtual T& obterElemento(T indice) = 0;

    /**
     * @brief Retorna o elemento localizado no índice especificado (versão const).
     * @param indice A posição do elemento desejado (baseado em zero).
     * @return Uma referência constante ao elemento no índice.
     */
    virtual const T& obterElemento(T indice) const = 0;
};

#endif _VETORGENDIN