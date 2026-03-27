float calculaImposto(float salario) {
    if(salario <= 1000.0) return 0.0;
    if(salario >= 1000.01 && salario < 1800.0) return 0.15 * salario;
    if(salario > 1800.0) return 0.275 * salario;
}