vector<complex<double>> naive_dft(vector<complex<double>> data) {
    int N = data.size();
    vector<complex<double>> result(N);

    for (int k = 0; k < N; k++) {
        complex<double> sum(0, 0);
        for (int n = 0; n < N; n++) {
            sum += data[n] * exp(-2 * M_PI * I * k * n / N);
        }
        result[k] = sum;
    }

    return result;
}
