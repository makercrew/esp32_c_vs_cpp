ARG USER=dev
ARG UID=1000

FROM espressif/idf:v4.4.3

ARG UID
ARG USER

# Create Non-Root User
RUN ["dash", "-c", "\
    addgroup \
     --gid ${UID} \
     \"${USER}\" \
 && adduser \
     --disabled-password \
     --gecos \"\" \
     --ingroup \"${USER}\" \
     --uid ${UID} \
     \"${USER}\" \
 && usermod \
     --append \
     --groups \"dialout,plugdev\" \
     \"${USER}\" \
 && cd /opt/esp/idf \
"]

RUN echo "git config --global --add safe.directory /opt/esp/idf" >> /home/dev/.bashrc && echo "git config --global --add safe.directory /opt/esp/idf/components/openthread/openthread" >> /home/dev/.bashrc && echo "source /opt/esp/idf/export.sh" >> /home/dev/.bashrc
ENV LC_ALL=C