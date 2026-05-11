float quote(float area, float preco) {
    return area * preco;
}

float desc(float valorBruto, float desconto) {
    return valorBruto * desconto;
}

float sub(float valorBruto, float descontoCalc) {
    return valorBruto - descontoCalc;
}
float imp(float subtotal, float taxa) {
    return subtotal * (taxa/100);
}

float liq(float subtotal, float imposto) {
    return subtotal + imposto;
}