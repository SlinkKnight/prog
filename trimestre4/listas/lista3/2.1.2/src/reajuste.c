float reajuste(float salAtual, float servico) {

    float reajuste, tax, bonus;

    tax = (salAtual <= 500.0) ? 1.25 : (salAtual <= 1000.0) ? 1.2 : (salAtual <= 1500.0) ? 1.15 : (salAtual <= 2000.0) ? 1.1 : 1;
    bonus = (servico < 1.0) ? 0 : (servico <= 3.0) ? 100.0 : (servico <= 6.0) ? 200.0 : (servico <= 10.0) ? 300.0 : 500.0;

    reajuste = bonus + tax * salAtual;

    return reajuste;
}