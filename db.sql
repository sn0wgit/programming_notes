-- Comments in SQL (they don't affect code)
-- DB Schema:
-- https://viewer.diagrams.net/index.html?tags={}&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Veterinary Clinic System.drawio#Uhttps://drive.google.com/uc?id=1w3liETwn1Io6PbzRaL9--jVwsjhPqq4P&export=download#{"pageId":"C5RBs43oDa-KdzZeNtuy"}
CREATE TABLE Owners (
    ID INTEGER NOT NULL,
    Name TEXT,
    PRIMARY KEY(ID)
);

CREATE TABLE Pets (
    ID INTEGER,
    OwnerID INTEGER,
    Name TEXT,
    Specy TEXT,
    PRIMARY KEY(ID),
    FOREIGN KEY(OwnerID) REFERENCES Owners(ID)
);

CREATE TABLE PT ( -- Pet's Treatments
    Treatment TEXT,
    PetID INTEGER,
    PRIMARY KEY(Treatment),
    FOREIGN KEY(PetID) REFERENCES Pets(ID)
);

CREATE TABLE Appointments (
    ID INTEGER,
    PetID INTEGER,
    DateAndTime DATETIME,
    PRIMARY KEY(ID),
    FOREIGN KEY(PetID) REFERENCES Pets(ID)
);

CREATE TABLE StIA ( -- Staff In Appointments
    AppointementID INTEGER NOT NULL,
    VetID INTEGER NOT NULL,
    FOREIGN KEY(AppointementID) REFERENCES Appointements(ID),
    FOREIGN KEY(VetID) REFERENCES Veterinarians(ID)
);

CREATE TABLE Veterinarians (
    ID INTEGER,
    RoleID INTEGER,
    Name TEXT,
    PRIMARY KEY(ID),
    FOREIGN KEY(RoleID) REFERENCES Roles(ID)
);

CREATE TABLE Roles (
    ID INTEGER,
    Name TEXT,
    PRIMARY KEY(ID)
);

CREATE TABLE AP ( -- Administrative personnel
    ID INTEGER,
    RoleID INTEGER,
    Name TEXT,
    PRIMARY KEY(ID),
    FOREIGN KEY(RoleID) REFERENCES Roles(ID)
);

CREATE TABLE AV ( -- Areas of Veterinarians
    VetID INTEGER NOT NULL,
    AreaID INTEGER NOT NULL,
    FOREIGN KEY(VetID) REFERENCES Veterinarians(ID),
    FOREIGN KEY(AreaID) REFERENCES Areas(ID)
);

CREATE TABLE Areas ( -- Areas of Veterinarians
    ID INTEGER,
    Name TEXT,
    PRIMARY KEY(ID)
);

CREATE TABLE SV ( -- Specializations of Veterinarians
    AppointementID INTEGER NOT NULL,
    AreaID INTEGER NOT NULL,
    FOREIGN KEY(AppointementID) REFERENCES Appointements(ID),
    FOREIGN KEY(AreaID) REFERENCES Areas(ID)
);

CREATE TABLE Services (
    ID INTEGER NOT NULL,
    Name TEXT,
    Price FLOAT,
    PRIMARY KEY(ID)
);

CREATE TABLE ServIA ( -- Services In Appointments
    AppointementID INTEGER NOT NULL,
    ServiceID INTEGER NOT NULL,
    FOREIGN KEY(AppointementID) REFERENCES Appointements(ID),
    FOREIGN KEY(ServiceID) REFERENCES Services(ID)
);
