/* CALCULO DEL PROPULSOR LATERAL */

int calcularPropulsorLateral(const ParametrosOrbita *parametros,
                             ResultadosOrbita *resultados)
{
    double aceleracion;
    double duracion;
    double velocidad_final;
    double desviacion;

    /* Validar punteros */
    if (parametros == NULL || resultados == NULL) {
        return 0;
    }

    aceleracion = parametros->aceleracion_lateral;
    duracion = parametros->duracion_pulso;

    /* Validar datos */
    if (!isfinite(aceleracion) ||
        !isfinite(duracion) ||
        aceleracion < 0.0 ||
        duracion < 0.0) {
        return 0;
    }

    /* Calcular velocidad lateral final */
    velocidad_final = aceleracion * duracion;

    /* Calcular desviacion lateral */
    desviacion = 0.5 * aceleracion * duracion * duracion;

    /* Comprobar resultados */
    if (!isfinite(velocidad_final) ||
        !isfinite(desviacion)) {
        return 0;
    }

    /* Guardar resultados */
    resultados->velocidad_lateral_final_m_s = velocidad_final;
    resultados->desviacion_lateral_m = desviacion;

    return 1;
}