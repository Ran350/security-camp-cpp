#include <iostream>
#include <print>

int main()
{
    double eur, jpy, gbp, aud, cad, cny, inr, chf;
    std::cin >> eur >> jpy >> gbp >> aud >> cad >> cny >> inr >> chf;

    double spread;
    std::cin >> spread;

    double usd_jpy = (1.0 / jpy);
    double eur_jpy = (usd_jpy * eur);
    double gbp_jpy = (usd_jpy * gbp);
    double aud_jpy = (usd_jpy * aud);
    double cad_jpy = (usd_jpy * cad);
    double cny_jpy = (usd_jpy * cny);
    double inr_jpy = (usd_jpy * inr);
    double chf_jpy = (usd_jpy * chf);

    double sellSpread = (1.0 + spread);
    double buySpread = (1.0 - spread);

    std::println("=== Currency Exchange ===");
    std::println("     We sell\tWe buy");
    std::println("USD: {:.5}\t{:.5}", (usd_jpy * sellSpread),
                 (usd_jpy * buySpread));
    std::println("EUR: {:.5}\t{:.5}", (eur_jpy * sellSpread),
                 (eur_jpy * buySpread));
    std::println("GBP: {:.5}\t{:.5}", (gbp_jpy * sellSpread),
                 (gbp_jpy * buySpread));
    std::println("AUD: {:.5}\t{:.5}", (aud_jpy * sellSpread),
                 (aud_jpy * buySpread));
    std::println("CAD: {:.5}\t{:.5}", (cad_jpy * sellSpread),
                 (cad_jpy * buySpread));
    std::println("CNY: {:.5}\t{:.5}", (cny_jpy * sellSpread),
                 (cny_jpy * buySpread));
    std::println("INR: {:.5}\t{:.5}", (inr_jpy * sellSpread),
                 (inr_jpy * buySpread));
    std::println("CHF: {:.5}\t{:.5}", (chf_jpy * sellSpread),
                 (chf_jpy * buySpread));

    std::println("\n=== Exchange 10,000 JPY ===");
    std::println("USD: {:.2f}", (10000.0 / (usd_jpy * sellSpread)));
    std::println("EUR: {:.2f}", (10000.0 / (eur_jpy * sellSpread)));
    std::println("GBP: {:.2f}", (10000.0 / (gbp_jpy * sellSpread)));
    std::println("AUD: {:.2f}", (10000.0 / (aud_jpy * sellSpread)));
    std::println("CAD: {:.2f}", (10000.0 / (cad_jpy * sellSpread)));
    std::println("CNY: {:.2f}", (10000.0 / (cny_jpy * sellSpread)));
    std::println("INR: {:.2f}", (10000.0 / (inr_jpy * sellSpread)));
    std::println("CHF: {:.2f}", (10000.0 / (chf_jpy * sellSpread)));
}
