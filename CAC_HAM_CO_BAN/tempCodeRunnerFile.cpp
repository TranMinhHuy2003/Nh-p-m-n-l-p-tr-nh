float Dientich (float a, float b, float c) {
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}