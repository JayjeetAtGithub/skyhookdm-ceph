-- usage:  psql -d <dbname> -f <this.ddl.sql>
-- This script will create 2 tablespaces one each on ssd and hdd on our 
-- standard cloudlab machine paths below which are:
-- hdd: /mnt/sda4/ssdpgtablespace
-- ssd: /mnt/sdc/ssdpgtablespace
-- 
-- It assumes postgres 9.6 is installed with the PostreSQL user 'postgres'
-- and the above dirs are owned by the OS user 'postgres'
-- i.e.,
-- sudo mkdir /mnt/sdc/ssdpgtablespace; sudo chown postgres /mnt/sdc/ssdpgtablespace
-- sudo mkdir /mnt/sda4/hddpgtablespace; sudo chown postgres /mnt/sda4/hddpgtablespace
-- 
-- It will then load 10M and 1B versions of our tpch dataset, it assumes files of the below
-- numbers of rows, each of lineitem table, that were created with the tpc datagen
-- and using the pipe | delimiter
-- and the filepaths are such as:
-- /mnt/sda4/data/lineitem-10M-rows.tbl
-- /mnt/sda4/data/lineitem-1B-rows.tbl
--
-- example create statement for indexes and table data onto a tablespace.
-- create table t (a int, b int, c char(10), primary key (a,b) using index tablespace ssd) tablespace ssd;

DROP TABLE IF EXISTS LINEITEM10MSSD CASCADE;     
DROP TABLE IF EXISTS LINEITEM10MHDD CASCADE;
DROP TABLE IF EXISTS LINEITEM10MSSDPK CASCADE;     
DROP TABLE IF EXISTS LINEITEM10MHDDPK CASCADE;

DROP TABLE IF EXISTS LINEITEM1BSSD CASCADE;     
DROP TABLE IF EXISTS LINEITEM1BHDD CASCADE;
DROP TABLE IF EXISTS LINEITEM1BSSDPK CASCADE;     
DROP TABLE IF EXISTS LINEITEM1BHDDPK CASCADE;

drop tablespace if exists ssd;
drop tablespace if exists hdd;

create tablespace ssd owner postgres location '/mnt/sdc/ssdpgtablespace';
create tablespace hdd owner postgres location '/mnt/sda4/hddpgtablespace';

\timing

CREATE TABLE LINEITEM10MSSD(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1))
         TABLESPACE ssd; 
         
         
CREATE TABLE LINEITEM10MHDD(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1))
         TABLESPACE hdd;  


CREATE TABLE LINEITEM10MSSDPK(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1),
         PRIMARY KEY (L_ORDERKEY,L_PARTKEY) USING INDEX TABLESPACE ssd)
         TABLESPACE ssd; 
         
         
CREATE TABLE LINEITEM10MHDDPK(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1),
         PRIMARY KEY (L_ORDERKEY,L_PARTKEY) USING INDEX TABLESPACE hdd)
         TABLESPACE hdd; 

CREATE TABLE LINEITEM1BSSD(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1))
         TABLESPACE ssd; 
         
         
CREATE TABLE LINEITEM1BHDD(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1))
         TABLESPACE hdd;  


CREATE TABLE LINEITEM1BSSDPK(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1),
         PRIMARY KEY (L_ORDERKEY,L_PARTKEY) USING INDEX TABLESPACE ssd)
         TABLESPACE ssd; 
         
         
CREATE TABLE LINEITEM1BHDDPK(
         L_ORDERKEY    INTEGER NOT NULL, 
         L_PARTKEY     INTEGER NOT NULL,
         L_SUPPKEY     INTEGER NOT NULL, 
         L_LINENUMBER  INTEGER NOT NULL, 
         L_QUANTITY    DECIMAL(15,2) NOT NULL, 
         L_EXTENDEDPRICE  DECIMAL(15,2) NOT NULL, 
         L_DISCOUNT    DECIMAL(15,2) NOT NULL, 
         L_TAX         DECIMAL(15,2) NOT NULL, 
         L_RETURNFLAG  CHAR(1) NOT NULL, 
         L_LINESTATUS  CHAR(1) NOT NULL, 
         L_SHIPDATE    DATE NOT NULL, 
         L_COMMITDATE  DATE NOT NULL, 
         L_RECEIPTDATE DATE NOT NULL, 
         L_SHIPINSTRUCT CHAR(25) NOT NULL,  
         L_SHIPMODE     CHAR(10) NOT NULL, 
         L_COMMENT      VARCHAR(44) NOT NULL,
         L_EMPTY CHAR(1),
         PRIMARY KEY (L_ORDERKEY,L_PARTKEY) USING INDEX TABLESPACE hdd)
         TABLESPACE hdd; 

COMMIT WORK;

-- LOAD THE DATA 

-- 10M rows
COPY lineitem10MHDD from '/mnt/sda4/data/lineitem-10M-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;
COPY lineitem10MSSD from '/mnt/sda4/data/lineitem-10M-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;
COPY lineitem10MHDDPK from '/mnt/sda4/data/lineitem-10M-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;
COPY lineitem10MSSDPK from '/mnt/sda4/data/lineitem-10M-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;


-- 1B rows
COPY lineitem1BHDD from '/mnt/sda4/data/lineitem-1B-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;
COPY lineitem1BSSD from '/mnt/sda4/data/lineitem-1B-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;
COPY lineitem1BHDDPK from '/mnt/sda4/data/lineitem-1B-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;
COPY lineitem1BSSDPK from '/mnt/sda4/data/lineitem-1B-rows.tbl' DELIMITER '|' CSV;
COMMIT WORK;






